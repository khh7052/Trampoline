using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GPGSManager : MonoBehaviour
{

    private void Start()
    {
        GPGSBinder.Inst.Login();
        GameManager.OnGameOver.AddListener(MaxHeightUpdate);
    }

    private void MaxHeightUpdate()
    {
        GPGSBinder.Inst.ReportLeaderboard(GPGSIds.leaderboard_maxheight, GameManager.MaxHeight);
        GPGSBinder.Inst.ShowTargetLeaderboardUI(GPGSIds.leaderboard_maxheight);
    }
}
